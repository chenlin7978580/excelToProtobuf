/********************************************************************

  Filename:   LoadExcelData

  Description:LoadExcelData

  Version:  1.0
  Created:  15:4:2015   10:10
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __LoadExcelData_H__
#define __LoadExcelData_H__
#include <string>
#include <list>
#include <map>
#include <set>
#include <vector>
#include "MapTemplate.h"
namespace ToolSpace {

  enum TypeEnum{
    TYPE_INT = 0,             //int ����
    TYPE_STRING = 1,          //�ַ�������
    TYPE_ARRAY = 2,           //��������
    TYPE_GROUP = 3,           //��ά��������
    TYPE_ENUM = 4,            //ö������
    TYPE_SELF = 5,            //�Զ�������ö��(�����ö������)
    TYPE_NODERIVE = 6,        //ע��
    TYPE_MAX,
  };

  enum {
    row_name = 0,   //�ֶ���
    row_type = 1,   //�ֶ�����
    col_id = 0,     //ID
    col_file = 0,
    col_name = 1,
    col_becheck = 0,
    col_check_condition = 1,
  };

  //ö�ٶ���
  struct stEnumValue {
    std::string name;       //ö��ֵ����       
    int value;              //ö�ٶ����ֵ
    std::string comment;    //ע��
  };
  struct stEnum {
    std::string fullName;   //ö��ȫ����   table.name
    std::string table;      //������       table
    std::string name;       //ö������      name
    std::map<std::string, stEnumValue>  values; //ö�ٶ���ֵ

    bool operator < (const stEnum& l) const{
     return fullName < l.fullName;
    }
  };
 
  //����ͷ����
  struct stField {
    std::string name;     //�ֶ�����
    TypeEnum type;        //�ֶ�����
    int index;            //�ֶ��±�
    std::string type_name;//��������
    std::string comment;  //ע��
    std::string table;    //������
  };

  //���ݼ�¼
  struct stValue {
    int index;
    std::string value;
  };
  //���һ����¼
  struct  stRecord {
    int id;                           //��¼ID
    ObjectMap<int, stValue> record;   //��ϸ�ļ�¼����
  };

  //���ݼ��
  struct stCheckParam {
    enum CCType {
      _NONE_ = 0,       //����Ҫ���
      _ENUM_ = 1,       //����Ƿ���ö�ٷ�Χ
      _HEAD_ = 2,       //����ڱ����Ƿ�������
      _INT_= 3,         //intֵ
    };
    std::shared_ptr<stField> head;     //��Ҫ���Ķ���
    std::shared_ptr<stEnum> en;       //��Ҫ����ö��
    stEnumValue env;      //ö����ֵ
    CCType type;          //����
    int index;            //�ڼ�������
  };
  
  typedef  std::vector<stCheckParam> VParams;
  struct stCheckField {
    int index;                     //�����ֶε�ID
    std::vector<VParams> check_in; //��������
  };
  //������ļ��
  struct stTableCheck {
    std::string table;
    std::map < std::string, stCheckField> checks;
  };
  class Table
  {
  public:
    typedef ObjPtrMap<int, stRecord> RecordMap;
    typedef RecordMap::value_type ReacordPtr;
    typedef ObjPtrMap<int, stField> FieldMap;
    typedef FieldMap::value_type FieldPtr;

    explicit Table(const char* name);
    ~Table();
    const std::string&  tableName() const;              //������
    
    bool addField(std::shared_ptr<stField>  head);        //����һ�����ֶ�
    bool addRecord(int index, std::shared_ptr<stRecord> record);

    const RecordMap& recordMap() const;
    const FieldMap& fieldMap() const;

    const FieldPtr& getField(int index) const { return m_heads.getData(index); }
    const FieldPtr& getField(const std::string& name) const;

    const ReacordPtr& getRecord(int id) const { return m_records.getData(id); }
  protected:
    Table& operator = (const Table&) = delete;
    Table(const Table&) = delete;
  private:
    FieldMap m_heads;      //�������ݶ���
    RecordMap m_records;  //��������
    std::string m_name;   //����
  };


  class TableManager
  {
  public:
    explicit TableManager( const char* file);
    ~TableManager();
    bool run();

    struct stPackMapping {
      std::string file;
      std::set<std::string> list;
    };
  private:
    typedef ObjPtrMap<std::string, Table> TableMap;
    typedef TableMap::value_type TablePtr;
    typedef ObjPtrMap<std::string, stPackMapping> PackMap;
    typedef PackMap::value_type PackMappingPtr;
    typedef ObjPtrMap<std::string, stEnum>EnumMap;
    typedef EnumMap::value_type EnumPtr;
    typedef ObjPtrMap<std::string, stTableCheck> CheckMap;
    typedef CheckMap::value_type CheckPtr;
  protected:
    TableManager& operator = (const TableManager&) = delete;
    TableManager(const TableManager&) = delete;

    bool loadEnumFile(PackMappingPtr ptr);    //����ö�ٶ����ļ�
    bool loadRecordFile(PackMappingPtr ptr);  //����Ҫ����ı���ļ�
    bool loadCheckFile(PackMappingPtr ptr);   //���ؼ��ı���ļ�

    bool isXLSX(const std::string&  str) const;     //�Ƿ���excel2007

    stCheckParam getCheckParam(const std::string& str, int index);   //����������

    TypeEnum getType(const std::string& t) const;   //��ȡ���������

    void log(const std::string& error) const;       //log error
    bool check() const;                       //��һЩ�򵥵ļ��, ������Ҷ����ö��ֵ�Ƿ����. �ֶ��Ƿ����
    void commonDefine(const std::string&);    //common.proto
    void exportToLua();                       //������lua�ļ�
  private:
    //��ȡȫ�����õ�ö�ٶ���
    enum {
      NAME_SPACE_INDEX = 0,                             //�����ռ��col
      ALL_CONFIG_NAME = 1,                              //������������ֵ�col
      CONFIG_TAIL_NAME = 2,                             //�����proto��׷��β�����ֶ���col
      OUT_MANAGER_FILE_NAME = 3,                        //������ֵ�Col
      OUT_DIR = 4,                                      //���Ŀ¼Col
      EXCEL_DIR = 5,                                    //excel���Ŀ¼Col
    };

     
    enum {
      ENUM_DEFINE_INDEX = 0,                            //ö�ٶ����ļ���sheet index
      EXCEL_TO_PACK_INDEX = 1,                          //��Ҫ������ļ���sheet index
      OUT_SET_INDEX = 2,                                //����ļ���sheet index
      CHECK_SET_INDEX = 3,                              //����ļ���sheet index
    };
    TableMap m_tables;                                      //���м�¼
    PackMap m_packRecordMap;                                //����ļ�����ӳ��
    PackMap m_packEnumMap;                                  //ö���ļ�ӳ��
    PackMap m_packCheckMap;                                 //���ݼ���ļ�ӳ��
    std::string m_fileName;                                 //���ļ�����
    ObjPtrMap<std::string,stEnum> m_ens;                    //ö���б�
    CheckMap m_checks;                                      //��ֵ���Ķ���
    std::string m_nameSpace;                                //�����ռ�
    std::string m_allConfigName;                            //������������
    std::string m_configTailName;                           //����β������
    std::string m_outDir;                                   //���Ŀ¼
    std::string m_excelDir;                                 //excel���Ŀ¼
    std::string m_outFileName = "AllConfig";                //����Ĺ����������
    std::string m_commonDefineName = "ConfigTypeGroup";     //group���Ӷ�������

    mutable std::fstream* m_logStream;
  };
}

#endif