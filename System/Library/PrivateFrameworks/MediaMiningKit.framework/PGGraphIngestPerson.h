/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSDictionary;


@protocol PGGraphIngestPerson <NSObject>
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * contactID; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isUserCreated; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSDate * potentialBirthdayDate; 
@property (nonatomic,readonly) NSDate * anniversaryDate; 
@property (nonatomic,readonly) unsigned long long relationship; 
@property (nonatomic,readonly) unsigned long long ageCategory; 
@property (nonatomic,readonly) unsigned long long sex; 
@property (nonatomic,readonly) NSDictionary * locationsByAddressTypes; 
@required
-(unsigned long long)sex;
-(BOOL)isFavorite;
-(BOOL)isMe;
-(unsigned long long)ageCategory;
-(NSString *)contactID;
-(NSString *)UUID;
-(NSDate *)potentialBirthdayDate;
-(unsigned long long)relationship;
-(NSDate *)birthdayDate;
-(NSDate *)anniversaryDate;
-(BOOL)isUserCreated;
-(NSString *)fullName;
-(NSDictionary *)locationsByAddressTypes;

@end
