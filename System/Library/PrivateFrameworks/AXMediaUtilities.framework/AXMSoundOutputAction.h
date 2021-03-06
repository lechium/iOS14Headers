/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMOutputAction.h>

@class NSString, NSURL;

@interface AXMSoundOutputAction : AXMOutputAction {

	NSString* _soundID;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL; 
@property (nonatomic,readonly) NSString * soundID; 
+(id)_soundFileURLForSoundID:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)soundID;
-(id)initWithSoundID:(id)arg1 ;
-(id)_initWithURL:(id)arg1 handle:(id)arg2 ;
-(id)_initWithSoundID:(id)arg1 handle:(id)arg2 ;
-(NSURL *)soundFileURL;
@end

