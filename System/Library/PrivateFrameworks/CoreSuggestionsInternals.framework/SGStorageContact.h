/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMutableSet, SGRecordId, SGContactDetailsHolder, NSString;

@interface SGStorageContact : NSObject {

	NSMutableSet* _profiles;
	long long _masterEntityId;
	SGRecordId* _recordId;
	SGContactDetailsHolder* _internalDetectedDetails;

}

@property (retain) SGContactDetailsHolder * internalDetectedDetails;              //@synthesize internalDetectedDetails=_internalDetectedDetails - In the implementation block
@property (nonatomic,readonly) long long masterEntityId;                          //@synthesize masterEntityId=_masterEntityId - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) SGRecordId * recordId;                             //@synthesize recordId=_recordId - In the implementation block
+(id)contactWithMasterEntityId:(long long)arg1 ;
+(void)subtractDetailsFromSGContact:(id)arg1 thatMatchCNContact:(id)arg2 ;
+(id)mergeAll:(id)arg1 ;
+(id)contactFromContactEntity:(id)arg1 ;
-(id)profiles;
-(void)reload;
-(BOOL)hasProfileFromInteraction;
-(BOOL)isEqualToStorageContact:(id)arg1 ;
-(long long)masterEntityId;
-(id)allNames;
-(SGRecordId *)recordId;
-(void)addProfile:(id)arg1 ;
-(id)loadEmailAddressDetailsFrom:(id)arg1 ;
-(BOOL)canMerge:(id)arg1 ;
-(id)init;
-(BOOL)hasProfileFromTextMessage;
-(void)setInternalDetectedDetails:(SGContactDetailsHolder *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)loadBirthdayDetailsFrom:(id)arg1 ;
-(id)convertToContact:(id)arg1 ;
-(id)loadAddressDetailsFrom:(id)arg1 ;
-(SGContactDetailsHolder *)internalDetectedDetails;
-(id)convertToContact:(id)arg1 sourceEntity:(id)arg2 enrichments:(id)arg3 ;
-(unsigned long long)hash;
-(id)bestProfile;
-(id)loadPhoneDetailsFrom:(id)arg1 ;
-(void)merge:(id)arg1 ;
-(NSString *)name;
-(id)loadAllDetailsFrom:(id)arg1 ;
-(id)description;
@end

