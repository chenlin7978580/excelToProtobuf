// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DropConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DropConfig.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ProConfigSpace {

namespace {

const ::google::protobuf::Descriptor* DropConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DropConfig_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* DropConfig_DROP_TYPE_DEFINE_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DropConfig_DROP_DATA_TYPE_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_DropConfig_2eproto() {
  protobuf_AddDesc_DropConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "DropConfig.proto");
  GOOGLE_CHECK(file != NULL);
  DropConfig_descriptor_ = file->message_type(0);
  static const int DropConfig_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DropConfig, max_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DropConfig, drop_data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DropConfig, drop_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DropConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DropConfig, min_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DropConfig, rate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DropConfig, drop_type_),
  };
  DropConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DropConfig_descriptor_,
      DropConfig::default_instance_,
      DropConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DropConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DropConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DropConfig));
  DropConfig_DROP_TYPE_DEFINE_descriptor_ = DropConfig_descriptor_->enum_type(0);
  DropConfig_DROP_DATA_TYPE_descriptor_ = DropConfig_descriptor_->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_DropConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DropConfig_descriptor_, &DropConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_DropConfig_2eproto() {
  delete DropConfig::default_instance_;
  delete DropConfig_reflection_;
}

void protobuf_AddDesc_DropConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::ProConfigSpace::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020DropConfig.proto\022\016ProConfigSpace\032\025Conf"
    "igTypeGroup.proto\"\372\004\n\nDropConfig\022\021\n\tmax_"
    "level\030\004 \001(\005\0222\n\tdrop_data\030\007 \003(\0132\037.ProConf"
    "igSpace.ConfigTypeGroup\022\022\n\ndrop_count\030\006 "
    "\001(\005\022\n\n\002id\030\001 \001(\005\022\021\n\tmin_level\030\003 \001(\005\022\014\n\004ra"
    "te\030\005 \001(\005\022\021\n\tdrop_type\030\002 \001(\005\"1\n\020DROP_TYPE"
    "_DEFINE\022\014\n\010FIX_DROP\020\002\022\017\n\013RANDOM_DROP\020\001\"\235"
    "\003\n\016DROP_DATA_TYPE\022\020\n\014CARDDROPTYPE\020\010\022\024\n\020V"
    "ITALITYDROPTYPE\020\013\022\017\n\013VIPDROPTYPE\020\r\022\030\n\024TA"
    "LENTCDTIMEDROPTYPE\020\026\022\024\n\020JIANGHUNDROPTYPE"
    "\020\024\022\034\n\030ACHIEVEMENTPOINTDROPTYPE\020\n\022\020\n\014ITEM"
    "DROPTYPE\020\006\022\020\n\014COINDROPTYPE\020\004\022\023\n\017LOYALTYD"
    "ROPTYPE\020\t\022\022\n\016VIPEXPDROPTYPE\020\030\022\023\n\017CARDEXP"
    "DROPTYPE\020\002\022\025\n\021PLAYEREXPDROPTYPE\020\001\022\027\n\023TAL"
    "ENTPOINTDROPTYPE\020\025\022\032\n\026PVPPROTECTTIMEDROP"
    "TYPE\020\022\022\021\n\rSKILLDROPTYPE\020\003\022\021\n\rMONEYDROPTY"
    "PE\020\005\022\031\n\025DRAGONCOMMANDDROPTYPE\020\014\022\025\n\021EQUIP"
    "MENTDROPTYPE\020\007", 694);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DropConfig.proto", &protobuf_RegisterTypes);
  DropConfig::default_instance_ = new DropConfig();
  DropConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DropConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DropConfig_2eproto {
  StaticDescriptorInitializer_DropConfig_2eproto() {
    protobuf_AddDesc_DropConfig_2eproto();
  }
} static_descriptor_initializer_DropConfig_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* DropConfig_DROP_TYPE_DEFINE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DropConfig_DROP_TYPE_DEFINE_descriptor_;
}
bool DropConfig_DROP_TYPE_DEFINE_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const DropConfig_DROP_TYPE_DEFINE DropConfig::FIX_DROP;
const DropConfig_DROP_TYPE_DEFINE DropConfig::RANDOM_DROP;
const DropConfig_DROP_TYPE_DEFINE DropConfig::DROP_TYPE_DEFINE_MIN;
const DropConfig_DROP_TYPE_DEFINE DropConfig::DROP_TYPE_DEFINE_MAX;
const int DropConfig::DROP_TYPE_DEFINE_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* DropConfig_DROP_DATA_TYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DropConfig_DROP_DATA_TYPE_descriptor_;
}
bool DropConfig_DROP_DATA_TYPE_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 18:
    case 20:
    case 21:
    case 22:
    case 24:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const DropConfig_DROP_DATA_TYPE DropConfig::CARDDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::VITALITYDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::VIPDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::TALENTCDTIMEDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::JIANGHUNDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::ACHIEVEMENTPOINTDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::ITEMDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::COINDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::LOYALTYDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::VIPEXPDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::CARDEXPDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::PLAYEREXPDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::TALENTPOINTDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::PVPPROTECTTIMEDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::SKILLDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::MONEYDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::DRAGONCOMMANDDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::EQUIPMENTDROPTYPE;
const DropConfig_DROP_DATA_TYPE DropConfig::DROP_DATA_TYPE_MIN;
const DropConfig_DROP_DATA_TYPE DropConfig::DROP_DATA_TYPE_MAX;
const int DropConfig::DROP_DATA_TYPE_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int DropConfig::kMaxLevelFieldNumber;
const int DropConfig::kDropDataFieldNumber;
const int DropConfig::kDropCountFieldNumber;
const int DropConfig::kIdFieldNumber;
const int DropConfig::kMinLevelFieldNumber;
const int DropConfig::kRateFieldNumber;
const int DropConfig::kDropTypeFieldNumber;
#endif  // !_MSC_VER

DropConfig::DropConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DropConfig::InitAsDefaultInstance() {
}

DropConfig::DropConfig(const DropConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DropConfig::SharedCtor() {
  _cached_size_ = 0;
  max_level_ = 0;
  drop_count_ = 0;
  id_ = 0;
  min_level_ = 0;
  rate_ = 0;
  drop_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DropConfig::~DropConfig() {
  SharedDtor();
}

void DropConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DropConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DropConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DropConfig_descriptor_;
}

const DropConfig& DropConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DropConfig_2eproto();
  return *default_instance_;
}

DropConfig* DropConfig::default_instance_ = NULL;

DropConfig* DropConfig::New() const {
  return new DropConfig;
}

void DropConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    max_level_ = 0;
    drop_count_ = 0;
    id_ = 0;
    min_level_ = 0;
    rate_ = 0;
    drop_type_ = 0;
  }
  drop_data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DropConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_drop_type;
        break;
      }

      // optional int32 drop_type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_drop_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &drop_type_)));
          set_has_drop_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_min_level;
        break;
      }

      // optional int32 min_level = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_min_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &min_level_)));
          set_has_min_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_max_level;
        break;
      }

      // optional int32 max_level = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_max_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_level_)));
          set_has_max_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_rate;
        break;
      }

      // optional int32 rate = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rate_)));
          set_has_rate();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_drop_count;
        break;
      }

      // optional int32 drop_count = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_drop_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &drop_count_)));
          set_has_drop_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_drop_data;
        break;
      }

      // repeated .ProConfigSpace.ConfigTypeGroup drop_data = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_drop_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_drop_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_drop_data;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DropConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 drop_type = 2;
  if (has_drop_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->drop_type(), output);
  }

  // optional int32 min_level = 3;
  if (has_min_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->min_level(), output);
  }

  // optional int32 max_level = 4;
  if (has_max_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->max_level(), output);
  }

  // optional int32 rate = 5;
  if (has_rate()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->rate(), output);
  }

  // optional int32 drop_count = 6;
  if (has_drop_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->drop_count(), output);
  }

  // repeated .ProConfigSpace.ConfigTypeGroup drop_data = 7;
  for (int i = 0; i < this->drop_data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->drop_data(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DropConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 drop_type = 2;
  if (has_drop_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->drop_type(), target);
  }

  // optional int32 min_level = 3;
  if (has_min_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->min_level(), target);
  }

  // optional int32 max_level = 4;
  if (has_max_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->max_level(), target);
  }

  // optional int32 rate = 5;
  if (has_rate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->rate(), target);
  }

  // optional int32 drop_count = 6;
  if (has_drop_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->drop_count(), target);
  }

  // repeated .ProConfigSpace.ConfigTypeGroup drop_data = 7;
  for (int i = 0; i < this->drop_data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->drop_data(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DropConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 max_level = 4;
    if (has_max_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_level());
    }

    // optional int32 drop_count = 6;
    if (has_drop_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->drop_count());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 min_level = 3;
    if (has_min_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->min_level());
    }

    // optional int32 rate = 5;
    if (has_rate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rate());
    }

    // optional int32 drop_type = 2;
    if (has_drop_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->drop_type());
    }

  }
  // repeated .ProConfigSpace.ConfigTypeGroup drop_data = 7;
  total_size += 1 * this->drop_data_size();
  for (int i = 0; i < this->drop_data_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->drop_data(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DropConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DropConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DropConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DropConfig::MergeFrom(const DropConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  drop_data_.MergeFrom(from.drop_data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_max_level()) {
      set_max_level(from.max_level());
    }
    if (from.has_drop_count()) {
      set_drop_count(from.drop_count());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_min_level()) {
      set_min_level(from.min_level());
    }
    if (from.has_rate()) {
      set_rate(from.rate());
    }
    if (from.has_drop_type()) {
      set_drop_type(from.drop_type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DropConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DropConfig::CopyFrom(const DropConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DropConfig::IsInitialized() const {

  return true;
}

void DropConfig::Swap(DropConfig* other) {
  if (other != this) {
    std::swap(max_level_, other->max_level_);
    drop_data_.Swap(&other->drop_data_);
    std::swap(drop_count_, other->drop_count_);
    std::swap(id_, other->id_);
    std::swap(min_level_, other->min_level_);
    std::swap(rate_, other->rate_);
    std::swap(drop_type_, other->drop_type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DropConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DropConfig_descriptor_;
  metadata.reflection = DropConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProConfigSpace

// @@protoc_insertion_point(global_scope)
