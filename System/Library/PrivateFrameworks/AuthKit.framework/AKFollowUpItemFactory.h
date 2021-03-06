/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol AKFollowUpItemFactory <NSObject>
@property (nonatomic,copy) NSString * extensionIdentifier; 
@property (nonatomic,copy) NSString * representingBundlePath; 
@property (nonatomic,copy) NSString * bundleIconName; 
@required
-(void)setExtensionIdentifier:(id)arg1;
-(NSString *)extensionIdentifier;
-(void)setRepresentingBundlePath:(id)arg1;
-(void)setBundleIconName:(id)arg1;
-(id)itemsForAltDSID:(id)arg1 fromIDMSPayload:(id)arg2;
-(id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1;
-(BOOL)IsFollowUpItemNotificationForced:(id)arg1;
-(NSString *)representingBundlePath;
-(NSString *)bundleIconName;

@end

