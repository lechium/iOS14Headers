/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IAMPropertyStorage.h>

@class ICInAppMessageManager, NSString;

@interface IAMICPropertyStorage : NSObject <IAMPropertyStorage> {

	ICInAppMessageManager* _iTunesCloudIAMManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
@end

