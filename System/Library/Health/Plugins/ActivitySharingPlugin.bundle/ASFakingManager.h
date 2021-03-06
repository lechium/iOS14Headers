/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@class ACHAchievementStore, HDProfile, ASActivityDataManager, ASCloudKitManager, ASCompetitionManager, ASContactsManager, ASFriend, _HKFitnessFriendWorkout, ACHAchievement, _HKFitnessFriendAchievement, _HKFitnessFriendActivitySnapshot, NSString;

@interface ASFakingManager : NSObject <ASActivitySharingManagerReadyObserver> {

	ACHAchievementStore* _achievementStore;
	HDProfile* _profile;
	ASActivityDataManager* _activityDataManager;
	ASCloudKitManager* _cloudKitManager;
	ASCompetitionManager* _competitionManager;
	ASContactsManager* _contactsManager;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ASActivityDataManager * activityDataManager;                     //@synthesize activityDataManager=_activityDataManager - In the implementation block
@property (assign,nonatomic,__weak) ASCloudKitManager * cloudKitManager;                             //@synthesize cloudKitManager=_cloudKitManager - In the implementation block
@property (assign,nonatomic,__weak) ASCompetitionManager * competitionManager;                       //@synthesize competitionManager=_competitionManager - In the implementation block
@property (assign,nonatomic,__weak) ASContactsManager * contactsManager;                             //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,readonly) ASFriend * fakeFriend; 
@property (nonatomic,readonly) _HKFitnessFriendWorkout * fakeWorkout; 
@property (nonatomic,readonly) ACHAchievement * fakeAchievement; 
@property (nonatomic,readonly) _HKFitnessFriendAchievement * fakeFriendAchievement; 
@property (nonatomic,readonly) _HKFitnessFriendActivitySnapshot * fakeSnapshot; 
@property (nonatomic,readonly) _HKFitnessFriendActivitySnapshot * fakeCompleteSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HDProfile *)arg1 ;
-(ASContactsManager *)contactsManager;
-(ASActivityDataManager *)activityDataManager;
-(HDProfile *)profile;
-(ASCompetitionManager *)competitionManager;
-(void)setContactsManager:(ASContactsManager *)arg1 ;
-(void)pushFakeActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(ASCloudKitManager *)cloudKitManager;
-(void)setCloudKitManager:(ASCloudKitManager *)arg1 ;
-(void)setActivityDataManager:(ASActivityDataManager *)arg1 ;
-(void)setCompetitionManager:(ASCompetitionManager *)arg1 ;
-(id)fakeFriendWithCompetitionStatus:(long long)arg1 competition:(id)arg2 ;
-(id)_contactWithFakeCompetitionStatus:(long long)arg1 ;
-(id)_fakeCompetitionHistory;
-(id)_fakeSnapshotWithCompleteRings:(BOOL)arg1 ;
-(_HKFitnessFriendActivitySnapshot *)fakeSnapshot;
-(_HKFitnessFriendAchievement *)fakeFriendAchievement;
-(_HKFitnessFriendWorkout *)fakeWorkout;
-(id)fakeCompetitionWithStartDate:(id)arg1 winningParticipant:(long long)arg2 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(ASFriend *)fakeFriend;
-(ACHAchievement *)fakeAchievement;
-(_HKFitnessFriendActivitySnapshot *)fakeCompleteSnapshot;
@end

