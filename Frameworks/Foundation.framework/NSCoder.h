/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCoder : NSObject

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (BOOL)__categorizeException:(id)arg1 intoError:(id*)arg2;

- (BOOL)__failWithException:(id)arg1;
- (BOOL)__failWithExceptionName:(id)arg1 errorCode:(int)arg2 format:(id)arg3;
- (void)__failWithExternalError:(id)arg1;
- (void)__setError:(id)arg1;
- (id)__tryDecodeObjectForKey:(id)arg1 error:(id*)arg2 decodeBlock:(id /* block */)arg3;
- (BOOL)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3;
- (id)allowedClasses;
- (BOOL)allowsKeyedCoding;
- (BOOL)containsValueForKey:(id)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(void*)arg3;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned int*)arg1;
- (id)decodeDataObject;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (int)decodeIntegerForKey:(id)arg1;
- (long)decodeLongForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (struct CGPoint { float x1; float x2; })decodePoint;
- (struct CGPoint { float x1; float x2; })decodePointForKey:(id)arg1;
- (id)decodePropertyListForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })decodeRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })decodeRectForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })decodeSize;
- (struct CGSize { float x1; float x2; })decodeSizeForKey:(id)arg1;
- (id)decodeTopLevelObjectAndReturnError:(id*)arg1;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (int)decodingFailurePolicy;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(const void*)arg3;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (void)encodeLong:(long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)encodePoint:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeSize:(struct CGSize { float x1; float x2; })arg1;
- (void)encodeSize:(struct CGSize { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)error;
- (void)failWithError:(id)arg1;
- (struct _NSZone { }*)objectZone;
- (BOOL)requiresSecureCoding;
- (void)setAllowedClasses:(id)arg1;
- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (unsigned int)systemVersion;
- (BOOL)validateAllowedClass:(Class)arg1 forKey:(id)arg2;
- (BOOL)validateClassSupportsSecureCoding:(Class)arg1;
- (int)versionForClassName:(id)arg1;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

- (struct { long long x1; int x2; unsigned int x3; long long x4; })decodeCMTimeForKey:(id)arg1;
- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })decodeCMTimeMappingForKey:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })decodeCMTimeRangeForKey:(id)arg1;
- (void)encodeCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)decodeArrayOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (id)decodeSetOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (void)encodeArrayOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeSetOfConditionalObjects:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (id)_ph_sandboxExtensionTokenKeyForURLKey:(id)arg1;
- (id)ph_decodeSandboxedURLForKey:(id)arg1 sandboxExtensionWrapper:(id*)arg2;
- (void)ph_encodeSandboxedURL:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (BOOL)CA_decodeCGFloatArray:(float*)arg1 count:(unsigned long)arg2 forKey:(id)arg3;
- (id)CA_decodeObjectForKey:(id)arg1;
- (void)CA_encodeCGFloatArray:(const float*)arg1 count:(unsigned long)arg2 forKey:(id)arg3;
- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(BOOL)arg3;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })decodeCGAffineTransformForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { float x1; float x2; })decodeCGVectorForKey:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })decodeUIEdgeInsetsForKey:(id)arg1;
- (struct UIOffset { float x1; float x2; })decodeUIOffsetForKey:(id)arg1;
- (void)encodeCGAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 forKey:(id)arg2;
- (void)encodeUIOffset:(struct UIOffset { float x1; float x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (id)akDecodeColorForKey:(id)arg1;
- (id)akDecodeImageForKey:(id)arg1;
- (void)akEncodeColor:(id)arg1 forKey:(id)arg2;
- (void)akEncodeImage:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

- (id)decodeArrayOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (id)decodeSetOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (void)encodeArrayOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeSetOfConditionalObjects:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

- (unsigned int)decodeTheme;
- (unsigned int)decodeThemeForKey:(id)arg1;
- (void)encodeTheme:(unsigned int)arg1;
- (void)encodeTheme:(unsigned int)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)applicationBundleIdentifier;
- (id)decodeArrayOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (id)decodeSetOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (void)encodeArrayOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeSetOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (BOOL)isAuthorizedForLocationAccess;
- (BOOL)isEntitledForSPIAccess;
- (BOOL)isLocalStore;
- (BOOL)isRemoteGatewayCoder;
- (BOOL)isRemoteTransport;
- (BOOL)isRemoteTransportOnSameAccount;
- (BOOL)isXPCTransport;

// Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec

- (id)prs_URLForKey:(id)arg1;
- (id)prs_arrayForKey:(id)arg1;
- (BOOL)prs_boolForKey:(id)arg1;
- (id)prs_dataForKey:(id)arg1;
- (id)prs_dateForKey:(id)arg1;
- (id)prs_dictionaryForKey:(id)arg1;
- (double)prs_doubleForKey:(id)arg1;
- (float)prs_floatForKey:(id)arg1;
- (id)prs_imageForKey:(id)arg1;
- (int)prs_intForKey:(id)arg1;
- (int)prs_integerForKey:(id)arg1;
- (id)prs_numberForKey:(id)arg1;
- (id)prs_stringForKey:(id)arg1;
- (double)prs_timestampForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

- (void)decodeObjectsForKeys:(id)arg1 forObject:(id)arg2;
- (void)encodeObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)encodeObjectsForKeys:(id)arg1 forObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

- (struct CGPoint { float x1; float x2; })decodeCGPointForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { float x1; float x2; })decodeCGVectorForKey:(id)arg1;
- (void)encodeCGPoint:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { float x1; float x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)safeEncodeUIColor:(id)arg1 forKey:(id)arg2;

@end
