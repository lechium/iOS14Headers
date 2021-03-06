/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXUserInterfaceElementEventTracker.h>
#import <libobjc.A.dylib/PXPhotosDetailsAssetsWidgetEventTracker.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSString;

@interface _PXPhotosDetailsAssetsWidgetEventTracker : PXUserInterfaceElementEventTracker <PXPhotosDetailsAssetsWidgetEventTracker, PXChangeObserver> {

	BOOL _isDisplayingCuratedContent;
	NSString* _visibleState;
	long long _visibleStateSignpost;

}

@property (nonatomic,retain) NSString * visibleState;                      //@synthesize visibleState=_visibleState - In the implementation block
@property (assign,nonatomic) long long visibleStateSignpost;               //@synthesize visibleStateSignpost=_visibleStateSignpost - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingCuratedContent;              //@synthesize isDisplayingCuratedContent=_isDisplayingCuratedContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)visibleState;
-(void)logContentViewWillAppear;
-(void)logContentViewDidDisappear;
-(BOOL)isDisplayingCuratedContent;
-(void)setIsDisplayingCuratedContent:(BOOL)arg1 ;
-(void)_invalidateVisibleState;
-(void)_updateVisibleState;
-(void)setVisibleState:(NSString *)arg1 ;
-(void)_logDidStartViewingState:(id)arg1 ;
-(void)_logDidEndViewingState:(id)arg1 ;
-(long long)visibleStateSignpost;
-(void)setVisibleStateSignpost:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

