/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVMovie.h>
#import <AVFCore/AVFragmentMinding.h>

@class NSArray;

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>

@property (nonatomic,readonly) NSArray * tracks; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
+(BOOL)expectsPropertyRevisedNotifications;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(NSArray *)tracks;
-(Class)_classForMovieTracks;
-(BOOL)isAssociatedWithFragmentMinder;
-(id)trackWithTrackID:(int)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(BOOL)_mindsFragments;
-(id)tracksWithMediaType:(id)arg1 ;
-(BOOL)_needsLegacyChangeNotifications;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
@end
