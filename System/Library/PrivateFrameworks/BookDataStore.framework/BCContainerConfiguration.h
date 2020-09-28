/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol BCContainerConfiguration <NSObject>
@property (nonatomic,readonly) NSString * queueIdentifier; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) NSArray * appZones; 
@property (nonatomic,readonly) NSArray * serviceZones; 
@property (nonatomic,readonly) NSString * dbArchiveFolderName; 
@property (nonatomic,readonly) NSString * dbArchiveExtension; 
@property (nonatomic,readonly) NSString * dbArchiveFilename; 
@property (nonatomic,readonly) NSString * dbSubscriptionID; 
@property (nonatomic,readonly) NSString * appBundleIdentifier; 
@property (nonatomic,readonly) BOOL requiresDeviceToDeviceEncryption; 
@required
+(id)configuration;
-(NSString *)containerIdentifier;
-(NSString *)queueIdentifier;
-(NSString *)appBundleIdentifier;
-(BOOL)requiresDeviceToDeviceEncryption;
-(BOOL)shouldArchiveData:(id)arg1;
-(BOOL)shouldPerformDatabaseSubscriptionForServiceMode:(BOOL)arg1;
-(NSArray *)appZones;
-(NSArray *)serviceZones;
-(NSString *)dbArchiveFolderName;
-(NSString *)dbArchiveExtension;
-(NSString *)dbArchiveFilename;
-(NSString *)dbSubscriptionID;

@end
