/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOTransitAgent : PBCodable  {
    NSString *_name;
    NSString *_url;
    NSString *_telephone;
}

@property(retain) NSString * name;
@property(readonly) BOOL hasUrl;
@property(retain) NSString * url;
@property(readonly) BOOL hasTelephone;
@property(retain) NSString * telephone;


- (BOOL)readFrom:(id)arg1;
- (void)setTelephone:(id)arg1;
- (id)telephone;
- (BOOL)hasTelephone;
- (BOOL)hasUrl;
- (void)writeTo:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)dictionaryRepresentation;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;

@end