/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying> {
    NSEntityDescription * _entity;
    short  _entitysReferenceIDForProperty;
    void * _extraIvars;
    NSString * _name;
    struct __propertyDescriptionFlags { 
        unsigned int _isReadOnly : 1; 
        unsigned int _isTransient : 1; 
        unsigned int _isOptional : 1; 
        unsigned int _isIndexed : 1; 
        unsigned int _skipValidation : 1; 
        unsigned int _isIndexedBySpotlight : 1; 
        unsigned int _isStoredInExternalRecord : 1; 
        unsigned int _extraIvarsAreInDataBlob : 1; 
        unsigned int _isOrdered : 1; 
        unsigned int _hasMaxValueInExtraIvars : 1; 
        unsigned int _hasMinValueInExtraIvars : 1; 
        unsigned int _storeBinaryDataExternally : 1; 
        unsigned int _reservedAttributeFlagOne : 1; 
        unsigned int _reservedPropertyDescription : 3; 
    }  _propertyDescriptionFlags;
    NSMutableDictionary * _userInfo;
    NSArray * _validationPredicates;
    NSArray * _validationWarnings;
    NSData * _versionHash;
    NSString * _versionHashModifier;
}

@property (nonatomic, readonly) NSEntityDescription *entity;
@property (getter=isIndexed) BOOL indexed;
@property (getter=isIndexedBySpotlight) BOOL indexedBySpotlight;
@property (nonatomic, copy) NSString *name;
@property (getter=isOptional) BOOL optional;
@property (copy) NSString *renamingIdentifier;
@property (getter=isStoredInExternalRecord) BOOL storedInExternalRecord;
@property (getter=isTransient) BOOL transient;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (readonly) NSArray *validationPredicates;
@property (readonly) NSArray *validationWarnings;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *versionHashModifier;

+ (void)initialize;

- (void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6;
- (BOOL)_comparePredicatesAndWarnings:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (long)_entitysReferenceID;
- (BOOL)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3;
- (struct _NSExtraPropertyIVars { id x1; long long x2; }*)_extraIVars;
- (BOOL)_hasMaxValueInExtraIvars;
- (BOOL)_hasMinValueInExtraIvars;
- (id)_initWithName:(id)arg1;
- (void)_initializeExtraIVars;
- (BOOL)_isEditable;
- (BOOL)_isOrdered;
- (BOOL)_isRelationship;
- (BOOL)_isToManyRelationship;
- (BOOL)_isTriggerBacked;
- (BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (unsigned int)_propertyType;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2;
- (void)_restoreValidation;
- (void)_setEntity:(id)arg1;
- (void)_setEntitysReferenceID:(long)arg1;
- (void)_setOrdered:(BOOL)arg1;
- (BOOL)_skipValidation;
- (BOOL)_storeBinaryDataExternally;
- (void)_stripForMigration;
- (void)_throwIfNotEditable;
- (id)_underlyingProperty;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned int)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)elementID;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIndexed;
- (BOOL)isIndexedBySpotlight;
- (BOOL)isOptional;
- (BOOL)isReadOnly;
- (BOOL)isSpotlightIndexed;
- (BOOL)isStoredInExternalRecord;
- (BOOL)isStoredInTruth;
- (BOOL)isStoredInTruthFile;
- (BOOL)isTransient;
- (id)name;
- (id)renamingIdentifier;
- (void)setElementID:(id)arg1;
- (void)setIndexed:(BOOL)arg1;
- (void)setIndexedBySpotlight:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setOptional:(BOOL)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setSpotlightIndexed:(BOOL)arg1;
- (void)setStoredInExternalRecord:(BOOL)arg1;
- (void)setStoredInTruth:(BOOL)arg1;
- (void)setStoredInTruthFile:(BOOL)arg1;
- (void)setTransient:(BOOL)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2;
- (void)setVersionHashModifier:(id)arg1;
- (id)userInfo;
- (id)validationPredicates;
- (id)validationWarnings;
- (id)versionHash;
- (id)versionHashModifier;

@end
