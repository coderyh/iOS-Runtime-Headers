/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSDictionary;

@interface GKLeaderboardCategoryInternal : GKInternalRepresentation  {
    NSString *_categoryID;
    NSString *_localizedTitle;
    unsigned int _overallRank;
    unsigned int _overallRankCount;
    unsigned int _rankAmongFriends;
    unsigned int _friendCount;
    NSDictionary *_icons;
}

@property(retain) NSString * categoryID;
@property(retain) NSString * localizedTitle;
@property unsigned int overallRank;
@property unsigned int overallRankCount;
@property unsigned int rankAmongFriends;
@property unsigned int friendCount;
@property(retain) NSDictionary * icons;

+ (id)codedPropertyKeys;

- (void)setFriendCount:(unsigned int)arg1;
- (void)setRankAmongFriends:(unsigned int)arg1;
- (void)setOverallRankCount:(unsigned int)arg1;
- (void)setOverallRank:(unsigned int)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setCategoryID:(id)arg1;
- (unsigned int)friendCount;
- (unsigned int)rankAmongFriends;
- (unsigned int)overallRankCount;
- (unsigned int)overallRank;
- (id)localizedTitle;
- (id)categoryID;
- (id)icons;
- (void)setIcons:(id)arg1;
- (void)dealloc;

@end