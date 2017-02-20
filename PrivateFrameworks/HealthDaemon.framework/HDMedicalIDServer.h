/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMedicalIDServer : HDSubserver <HDMedicalIDServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)remote_deleteMedicalIDDataWithCompletion:(id /* block */)arg1;
- (void)remote_medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)remote_medicalIDEmergencyContactsWithCompletion:(id /* block */)arg1;
- (void)remote_updateMedicalIDData:(id)arg1 completion:(id /* block */)arg2;

@end