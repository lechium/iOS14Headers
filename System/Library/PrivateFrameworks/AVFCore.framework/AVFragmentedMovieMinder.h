/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFragmentedAssetMinder.h>

@class NSArray;

@interface AVFragmentedMovieMinder : AVFragmentedAssetMinder

@property (assign,nonatomic) double mindingInterval; 
@property (nonatomic,readonly) NSArray * movies; 
+(id)fragmentedMovieMinderWithMovie:(id)arg1 mindingInterval:(double)arg2 ;
-(NSArray *)movies;
-(double)mindingInterval;
-(void)setMindingInterval:(double)arg1 ;
-(BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
-(id)initWithMovie:(id)arg1 mindingInterval:(double)arg2 ;
-(void)addFragmentedMovie:(id)arg1 ;
-(void)removeFragmentedMovie:(id)arg1 ;
@end

