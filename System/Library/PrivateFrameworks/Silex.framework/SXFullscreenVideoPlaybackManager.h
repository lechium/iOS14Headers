/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSHashTable;

@interface SXFullscreenVideoPlaybackManager : NSObject {

	BOOL _transitionInProgress;
	BOOL _layoutInProgress;
	NSHashTable* _candidates;

}

@property (nonatomic,readonly) NSHashTable * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (assign,nonatomic) BOOL transitionInProgress;               //@synthesize transitionInProgress=_transitionInProgress - In the implementation block
@property (assign,nonatomic) BOOL layoutInProgress;                   //@synthesize layoutInProgress=_layoutInProgress - In the implementation block
-(NSHashTable *)candidates;
-(void)enterFullscreenIfNeeded;
-(void)setTransitionInProgress:(BOOL)arg1 ;
-(void)willLayoutAndTransitionToSize:(CGSize)arg1 ;
-(id)init;
-(void)removeCandidate:(id)arg1 ;
-(BOOL)transitionInProgress;
-(BOOL)layoutInProgress;
-(void)didLayoutForSize:(CGSize)arg1 ;
-(void)addCandidate:(id)arg1 ;
-(void)setLayoutInProgress:(BOOL)arg1 ;
-(void)didTransitionToSize:(CGSize)arg1 ;
@end
