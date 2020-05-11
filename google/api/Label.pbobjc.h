// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/label.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum LabelDescriptor_ValueType

/** Value types that can be used as label values. */
typedef GPB_ENUM(LabelDescriptor_ValueType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  LabelDescriptor_ValueType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /** A variable-length string. This is the default. */
  LabelDescriptor_ValueType_String = 0,

  /** Boolean; true or false. */
  LabelDescriptor_ValueType_Bool = 1,

  /** A 64-bit signed integer. */
  LabelDescriptor_ValueType_Int64 = 2,
};

GPBEnumDescriptor *LabelDescriptor_ValueType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL LabelDescriptor_ValueType_IsValidValue(int32_t value);

#pragma mark - LabelRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface LabelRoot : GPBRootObject
@end

#pragma mark - LabelDescriptor

typedef GPB_ENUM(LabelDescriptor_FieldNumber) {
  LabelDescriptor_FieldNumber_Key = 1,
  LabelDescriptor_FieldNumber_ValueType = 2,
  LabelDescriptor_FieldNumber_Description_p = 3,
};

/**
 * A description of a label.
 **/
@interface LabelDescriptor : GPBMessage

/** The label key. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

/** The type of data that can be assigned to the label. */
@property(nonatomic, readwrite) LabelDescriptor_ValueType valueType;

/** A human-readable description for the label. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *description_p;

@end

/**
 * Fetches the raw value of a @c LabelDescriptor's @c valueType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t LabelDescriptor_ValueType_RawValue(LabelDescriptor *message);
/**
 * Sets the raw value of an @c LabelDescriptor's @c valueType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetLabelDescriptor_ValueType_RawValue(LabelDescriptor *message, int32_t value);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
