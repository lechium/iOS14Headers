/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PFCloudKitContainerProvider, CKScheduler;


@protocol _PFCoreDataCloudKitServer
@property (nonatomic,readonly) PFCloudKitContainerProvider * containerProvider; 
@property (nonatomic,readonly) CKScheduler * scheduler; 
@required
-(void)tearDown;
-(CKScheduler *)scheduler;
-(PFCloudKitContainerProvider *)containerProvider;
-(void)setUp;

@end

