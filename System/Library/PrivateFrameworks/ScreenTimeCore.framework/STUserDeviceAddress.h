/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STCoreUser, STCoreDevice;

@interface STUserDeviceAddress : NSManagedObject

@property (nonatomic,retain) NSString * idsURI; 
@property (nonatomic,retain) STCoreUser * user; 
@property (nonatomic,retain) STCoreDevice * device; 
+(id)fetchOrCreateUserDeviceAddressWithUser:(id)arg1 device:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
@end
