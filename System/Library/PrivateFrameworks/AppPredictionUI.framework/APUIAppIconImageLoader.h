/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFResourceLoader.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface APUIAppIconImageLoader : NSObject <SFResourceLoader> {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _completionHandlers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)loadImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)_loadImageWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getImageForArtwork:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_blankIconImage;
-(void)registerImageLoader;
@end
