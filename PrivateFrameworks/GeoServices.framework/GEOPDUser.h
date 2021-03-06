/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDUser : PBCodable <NSCopying> {
    GEOPDPhoto *_image;
    NSString *_name;
}

@property (nonatomic, readonly) BOOL hasImage;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, retain) GEOPDPhoto *image;
@property (nonatomic, retain) NSString *name;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasImage;
- (BOOL)hasName;
- (unsigned int)hash;
- (id)image;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
