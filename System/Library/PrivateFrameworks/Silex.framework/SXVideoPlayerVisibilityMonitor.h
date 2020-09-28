/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVisibilityMonitoring.h>

@class SVVisibilityMonitor, NSMutableArray, NSString;

@interface SXVideoPlayerVisibilityMonitor : NSObject <SVVisibilityMonitoring> {

	SVVisibilityMonitor* _visibilityMonitor;
	NSMutableArray* _willAppearBlocks;
	NSMutableArray* _didAppearBlocks;
	NSMutableArray* _visiblePercentageBlocks;
	NSMutableArray* _willDisappearBlocks;
	NSMutableArray* _didDisappearBlocks;

}

@property (nonatomic,readonly) NSMutableArray * willAppearBlocks;                     //@synthesize willAppearBlocks=_willAppearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didAppearBlocks;                      //@synthesize didAppearBlocks=_didAppearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * visiblePercentageBlocks;              //@synthesize visiblePercentageBlocks=_visiblePercentageBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * willDisappearBlocks;                  //@synthesize willDisappearBlocks=_willDisappearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didDisappearBlocks;                   //@synthesize didDisappearBlocks=_didDisappearBlocks - In the implementation block
@property (nonatomic,retain) SVVisibilityMonitor * visibilityMonitor;                 //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) BOOL appeared; 
@property (nonatomic,readonly) double visiblePercentage; 
@property (nonatomic,__weak,readonly) id object; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)appeared;
-(unsigned long long)state;
-(id)object;
-(void)configureVisibilityMonitor:(id)arg1 ;
-(NSMutableArray *)willAppearBlocks;
-(void)onWillAppear:(/*^block*/id)arg1 ;
-(NSMutableArray *)didAppearBlocks;
-(void)onDidAppear:(/*^block*/id)arg1 ;
-(NSMutableArray *)willDisappearBlocks;
-(void)onWillDisappear:(/*^block*/id)arg1 ;
-(NSMutableArray *)didDisappearBlocks;
-(void)onDidDisappear:(/*^block*/id)arg1 ;
-(NSMutableArray *)visiblePercentageBlocks;
-(void)onVisiblePercentageChange:(/*^block*/id)arg1 ;
-(SVVisibilityMonitor *)visibilityMonitor;
-(double)visiblePercentage;
-(id)initWithVisibilityMonitor:(id)arg1 ;
-(void)setVisibilityMonitor:(SVVisibilityMonitor *)arg1 ;
@end
