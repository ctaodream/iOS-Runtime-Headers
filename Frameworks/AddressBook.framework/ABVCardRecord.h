/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardRecord : NSObject  {
    void *_record;
    struct __CFArray { } *_properties;
}

+ (BOOL)privateVCardEnabled;
+ (void)setPrivateVCardEnabled:(BOOL)arg1;
+ (void)setVCardField:(id)arg1 isPrivate:(BOOL)arg2;
+ (void)clearPrivateFields;
+ (BOOL)vcardFieldisPrivate:(id)arg1;
+ (void)setIncludeNotesInVCards:(BOOL)arg1;
+ (void)setIncludeREVInVCards:(BOOL)arg1;
+ (BOOL)includeABClipRectInVCardPhotos;
+ (void)setIncludePhotosInVCards:(BOOL)arg1;
+ (BOOL)includePhotosInVCards;
+ (struct __CFArray { }*)supportedProperties;
+ (BOOL)includeNotesInVCards;
+ (BOOL)includeREVInVCards;
+ (BOOL)includeImageURIInVCards;

- (id)init;
- (void)dealloc;
- (void*)record;
- (id)initWithVCardRepresentation:(id)arg1;
- (id)vCardRepresentationForMode:(int)arg1;
- (id)_21vCardRepresentationAsData;
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg1 withPhoto:(id)arg2 extraPhotoParameters:(id)arg3;
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg1;
- (id)newISO8061StringFromDate:(id)arg1;
- (void*)copyValueForProperty:(unsigned int)arg1;
- (BOOL)_showField:(unsigned int)arg1 identifier:(int)arg2;
- (struct __CFString { }*)_vCardKeyForGenericLabel:(id)arg1;
- (void)appendLabel:(id)arg1 toVCardRep:(id)arg2 inGroup:(id)arg3;
- (id)encodedDataForValue:(id)arg1 charsetName:(id*)arg2;
- (id)encodedLineForValue:(id)arg1;
- (id)propertyLineForIMHandles:(id)arg1 labels:(id)arg2 vCardProperty:(id)arg3;
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (BOOL)_isCompany;
- (id)_fullName;
- (id)alternateName;
- (id)_realCompositeName;
- (struct __CFString { }*)_vCardKeyForEmailLabel:(id)arg1;
- (id)_vCardKeysForPhoneLabel:(id)arg1;
- (id)_vCardKeyForAddressLabel:(id)arg1 vCard3:(BOOL)arg2;
- (id)propertyLineForGenericABProperty21:(unsigned int)arg1 vCardProperty:(id)arg2;
- (BOOL)_showField:(unsigned int)arg1;
- (id)ISO8061StringFromDate:(id)arg1;
- (id)dataForInstantMessageProperties;
- (id)dataForSocialProfileProperty:(void*)arg1 groupCount:(int*)arg2;
- (id)ISO8061StringFromDateTime:(id)arg1;
- (BOOL)useThumbnailImageFormatIfAvailable;
- (id)_prodID;
- (id)propertyLineForGenericABProperty:(unsigned int)arg1 vCardProperty:(id)arg2 is21:(BOOL)arg3 groupCount:(int*)arg4;
- (id)propertyLineForInstantMessageHandles:(id)arg1 groupCount:(int*)arg2;
- (id)propertyLineForIMPPProperty:(id)arg1 groupCount:(int*)arg2;
- (BOOL)setValue:(void*)arg1 forProperty:(unsigned int)arg2;
- (void*)valueForProperty:(unsigned int)arg1;
- (id)imageData;
- (id)initWithRecord:(void*)arg1;

@end