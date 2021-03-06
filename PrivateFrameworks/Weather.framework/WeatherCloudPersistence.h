/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence> {
    NSUbiquitousKeyValueStore * _cloudStore;
    <WeatherCloudPersistenceDelegate> * _delegate;
}

@property (retain) NSUbiquitousKeyValueStore *cloudStore;
@property (readonly, copy) NSString *debugDescription;
@property <WeatherCloudPersistenceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)cloudPersistenceWithDelegate:(id)arg1;
+ (BOOL)processIsWhitelistedForSync;

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (id)cloudStore;
- (id)delegate;
- (id)dictionaryForKey:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isInitialSyncNotification:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setCloudStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;

@end
