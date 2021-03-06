// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemShowConfig.proto

#ifndef PROTOBUF_ItemShowConfig_2eproto__INCLUDED
#define PROTOBUF_ItemShowConfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ConfigTypeGroup.pb.h"
// @@protoc_insertion_point(includes)

namespace ProConfigSpace {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ItemShowConfig_2eproto();
void protobuf_AssignDesc_ItemShowConfig_2eproto();
void protobuf_ShutdownFile_ItemShowConfig_2eproto();

class ItemShowConfig;

// ===================================================================

class ItemShowConfig : public ::google::protobuf::Message {
 public:
  ItemShowConfig();
  virtual ~ItemShowConfig();

  ItemShowConfig(const ItemShowConfig& from);

  inline ItemShowConfig& operator=(const ItemShowConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ItemShowConfig& default_instance();

  void Swap(ItemShowConfig* other);

  // implements Message ----------------------------------------------

  ItemShowConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ItemShowConfig& from);
  void MergeFrom(const ItemShowConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 show_id = 1;
  inline bool has_show_id() const;
  inline void clear_show_id();
  static const int kShowIdFieldNumber = 1;
  inline ::google::protobuf::int32 show_id() const;
  inline void set_show_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ProConfigSpace.ItemShowConfig)
 private:
  inline void set_has_show_id();
  inline void clear_has_show_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 show_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_ItemShowConfig_2eproto();
  friend void protobuf_AssignDesc_ItemShowConfig_2eproto();
  friend void protobuf_ShutdownFile_ItemShowConfig_2eproto();

  void InitAsDefaultInstance();
  static ItemShowConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// ItemShowConfig

// optional int32 show_id = 1;
inline bool ItemShowConfig::has_show_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ItemShowConfig::set_has_show_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ItemShowConfig::clear_has_show_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ItemShowConfig::clear_show_id() {
  show_id_ = 0;
  clear_has_show_id();
}
inline ::google::protobuf::int32 ItemShowConfig::show_id() const {
  return show_id_;
}
inline void ItemShowConfig::set_show_id(::google::protobuf::int32 value) {
  set_has_show_id();
  show_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProConfigSpace

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ItemShowConfig_2eproto__INCLUDED
