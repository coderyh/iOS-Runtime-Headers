/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@class NSString, RMSServiceMessage;

@interface RMSConnectToServiceMessage : PBCodable <NSCopying> {
    NSString *_pairingGUID;
    RMSServiceMessage *_service;
}

@property(readonly) bool hasPairingGUID;
@property(readonly) bool hasService;
@property(retain) NSString * pairingGUID;
@property(retain) RMSServiceMessage * service;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPairingGUID;
- (bool)hasService;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairingGUID;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setPairingGUID:(id)arg1;
- (void)setService:(id)arg1;
- (void)writeTo:(id)arg1;

@end