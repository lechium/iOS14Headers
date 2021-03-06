/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSArray, NSString;

@interface HMDAssistantAccessControlModel : HMDBackingStoreModelObject

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * options; 
@property (nonatomic,copy) NSArray * accessoryModelIDs; 
@property (nonatomic,retain) NSString * changeTag; 
+(id)properties;
-(id)dependentUUIDs;
@end

