// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: header.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "header.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* Header_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Header_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_header_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_header_2eproto() {
  protobuf_AddDesc_header_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "header.proto");
  GOOGLE_CHECK(file != NULL);
  Header_descriptor_ = file->message_type(0);
  static const int Header_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, str_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, stamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, index_),
  };
  Header_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Header_descriptor_,
      Header::default_instance_,
      Header_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _has_bits_[0]),
      -1,
      -1,
      sizeof(Header),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_header_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Header_descriptor_, &Header::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_header_2eproto() {
  delete Header::default_instance_;
  delete Header_reflection_;
}

void protobuf_AddDesc_header_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_header_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_time_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014header.proto\022\013gazebo.msgs\032\ntime.proto\""
    "I\n\006Header\022\016\n\006str_id\030\001 \001(\t\022 \n\005stamp\030\002 \001(\013"
    "2\021.gazebo.msgs.Time\022\r\n\005index\030\003 \001(\005", 114);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "header.proto", &protobuf_RegisterTypes);
  Header::default_instance_ = new Header();
  Header::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_header_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_header_2eproto {
  StaticDescriptorInitializer_header_2eproto() {
    protobuf_AddDesc_header_2eproto();
  }
} static_descriptor_initializer_header_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Header::kStrIdFieldNumber;
const int Header::kStampFieldNumber;
const int Header::kIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Header::Header()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Header)
}

void Header::InitAsDefaultInstance() {
  stamp_ = const_cast< ::gazebo::msgs::Time*>(&::gazebo::msgs::Time::default_instance());
}

Header::Header(const Header& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Header)
}

void Header::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  str_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stamp_ = NULL;
  index_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Header)
  SharedDtor();
}

void Header::SharedDtor() {
  str_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete stamp_;
  }
}

void Header::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Header::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Header_descriptor_;
}

const Header& Header::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_header_2eproto();
  return *default_instance_;
}

Header* Header::default_instance_ = NULL;

Header* Header::New(::google::protobuf::Arena* arena) const {
  Header* n = new Header;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Header)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_str_id()) {
      str_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_stamp()) {
      if (stamp_ != NULL) stamp_->::gazebo::msgs::Time::Clear();
    }
    index_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Header::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gazebo.msgs.Header)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string str_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->str_id().data(), this->str_id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "gazebo.msgs.Header.str_id");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_stamp;
        break;
      }

      // optional .gazebo.msgs.Time stamp = 2;
      case 2: {
        if (tag == 18) {
         parse_stamp:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_stamp()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_index;
        break;
      }

      // optional int32 index = 3;
      case 3: {
        if (tag == 24) {
         parse_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &index_)));
          set_has_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gazebo.msgs.Header)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gazebo.msgs.Header)
  return false;
#undef DO_
}

void Header::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gazebo.msgs.Header)
  // optional string str_id = 1;
  if (has_str_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str_id().data(), this->str_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Header.str_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->str_id(), output);
  }

  // optional .gazebo.msgs.Time stamp = 2;
  if (has_stamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->stamp_, output);
  }

  // optional int32 index = 3;
  if (has_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->index(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gazebo.msgs.Header)
}

::google::protobuf::uint8* Header::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Header)
  // optional string str_id = 1;
  if (has_str_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str_id().data(), this->str_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Header.str_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->str_id(), target);
  }

  // optional .gazebo.msgs.Time stamp = 2;
  if (has_stamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->stamp_, false, target);
  }

  // optional int32 index = 3;
  if (has_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->index(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Header)
  return target;
}

int Header::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Header)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional string str_id = 1;
    if (has_str_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->str_id());
    }

    // optional .gazebo.msgs.Time stamp = 2;
    if (has_stamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->stamp_);
    }

    // optional int32 index = 3;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->index());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Header::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Header)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Header* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Header>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Header)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Header)
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Header)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_str_id()) {
      set_has_str_id();
      str_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.str_id_);
    }
    if (from.has_stamp()) {
      mutable_stamp()->::gazebo::msgs::Time::MergeFrom(from.stamp());
    }
    if (from.has_index()) {
      set_index(from.index());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Header::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {

  if (has_stamp()) {
    if (!this->stamp_->IsInitialized()) return false;
  }
  return true;
}

void Header::Swap(Header* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Header::InternalSwap(Header* other) {
  str_id_.Swap(&other->str_id_);
  std::swap(stamp_, other->stamp_);
  std::swap(index_, other->index_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Header::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Header_descriptor_;
  metadata.reflection = Header_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Header

// optional string str_id = 1;
bool Header::has_str_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Header::set_has_str_id() {
  _has_bits_[0] |= 0x00000001u;
}
void Header::clear_has_str_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void Header::clear_str_id() {
  str_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_str_id();
}
 const ::std::string& Header::str_id() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Header.str_id)
  return str_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Header::set_str_id(const ::std::string& value) {
  set_has_str_id();
  str_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Header.str_id)
}
 void Header::set_str_id(const char* value) {
  set_has_str_id();
  str_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Header.str_id)
}
 void Header::set_str_id(const char* value, size_t size) {
  set_has_str_id();
  str_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Header.str_id)
}
 ::std::string* Header::mutable_str_id() {
  set_has_str_id();
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Header.str_id)
  return str_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Header::release_str_id() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Header.str_id)
  clear_has_str_id();
  return str_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Header::set_allocated_str_id(::std::string* str_id) {
  if (str_id != NULL) {
    set_has_str_id();
  } else {
    clear_has_str_id();
  }
  str_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str_id);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Header.str_id)
}

// optional .gazebo.msgs.Time stamp = 2;
bool Header::has_stamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Header::set_has_stamp() {
  _has_bits_[0] |= 0x00000002u;
}
void Header::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000002u;
}
void Header::clear_stamp() {
  if (stamp_ != NULL) stamp_->::gazebo::msgs::Time::Clear();
  clear_has_stamp();
}
const ::gazebo::msgs::Time& Header::stamp() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Header.stamp)
  return stamp_ != NULL ? *stamp_ : *default_instance_->stamp_;
}
::gazebo::msgs::Time* Header::mutable_stamp() {
  set_has_stamp();
  if (stamp_ == NULL) {
    stamp_ = new ::gazebo::msgs::Time;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Header.stamp)
  return stamp_;
}
::gazebo::msgs::Time* Header::release_stamp() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Header.stamp)
  clear_has_stamp();
  ::gazebo::msgs::Time* temp = stamp_;
  stamp_ = NULL;
  return temp;
}
void Header::set_allocated_stamp(::gazebo::msgs::Time* stamp) {
  delete stamp_;
  stamp_ = stamp;
  if (stamp) {
    set_has_stamp();
  } else {
    clear_has_stamp();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Header.stamp)
}

// optional int32 index = 3;
bool Header::has_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Header::set_has_index() {
  _has_bits_[0] |= 0x00000004u;
}
void Header::clear_has_index() {
  _has_bits_[0] &= ~0x00000004u;
}
void Header::clear_index() {
  index_ = 0;
  clear_has_index();
}
 ::google::protobuf::int32 Header::index() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Header.index)
  return index_;
}
 void Header::set_index(::google::protobuf::int32 value) {
  set_has_index();
  index_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Header.index)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)