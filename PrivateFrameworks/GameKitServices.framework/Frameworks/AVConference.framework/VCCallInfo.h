/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSData, NSDictionary, NSMutableDictionary, NSString;

@interface VCCallInfo : NSObject {
    unsigned long auNumber;
    unsigned long bitrateSequenceNumber;
    int callID;
    NSData *connectionData;
    NSString *hardwareVersion;
    BOOL isInNormalBitrateMode;
    unsigned long maxBandwidth;
    NSString *osVersion;
    NSString *participantID;
    NSData *relayConnectionData;
    NSDictionary *relayRequest;
    NSMutableDictionary *relayRequestResponse;
    NSDictionary *relayUpdate;
}

@property unsigned long auNumber;
@property unsigned long bitrateSequenceNumber;
@property int callID;
@property(retain) NSData * connectionData;
@property(copy) NSString * hardwareVersion;
@property BOOL isInNormalBitrateMode;
@property unsigned long maxBandwidth;
@property(copy) NSString * osVersion;
@property(copy) NSString * participantID;
@property(retain) NSData * relayConnectionData;
@property(retain) NSDictionary * relayRequest;
@property(retain) NSMutableDictionary * relayRequestResponse;
@property(retain) NSDictionary * relayUpdate;

- (unsigned long)auNumber;
- (unsigned long)bitrateSequenceNumber;
- (int)callID;
- (id)connectionData;
- (void)dealloc;
- (id)hardwareVersion;
- (id)init;
- (BOOL)isInNormalBitrateMode;
- (unsigned long)maxBandwidth;
- (id)osVersion;
- (id)participantID;
- (id)relayConnectionData;
- (id)relayRequest;
- (id)relayRequestResponse;
- (id)relayUpdate;
- (void)setAuNumber:(unsigned long)arg1;
- (void)setBitrateSequenceNumber:(unsigned long)arg1;
- (void)setCallID:(int)arg1;
- (void)setConnectionData:(id)arg1;
- (void)setHardwareVersion:(id)arg1;
- (void)setIsInNormalBitrateMode:(BOOL)arg1;
- (void)setMaxBandwidth:(unsigned long)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setRelayConnectionData:(id)arg1;
- (void)setRelayRequest:(id)arg1;
- (void)setRelayRequestResponse:(id)arg1;
- (void)setRelayUpdate:(id)arg1;

@end