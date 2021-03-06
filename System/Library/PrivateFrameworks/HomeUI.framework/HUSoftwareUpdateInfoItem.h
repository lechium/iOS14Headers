/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMSoftwareUpdate, NSString;

@interface HUSoftwareUpdateInfoItem : HFItem <HFHomeKitItemProtocol> {

	HMSoftwareUpdate* _softwareUpdate;
	NSString* _publisher;

}

@property (nonatomic,readonly) HMSoftwareUpdate * softwareUpdate;              //@synthesize softwareUpdate=_softwareUpdate - In the implementation block
@property (nonatomic,readonly) NSString * publisher;                           //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)publisher;
-(id)init;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithSoftwareUpdate:(id)arg1 publisher:(id)arg2 ;
-(HMSoftwareUpdate *)softwareUpdate;
@end

