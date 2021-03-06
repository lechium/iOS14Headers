/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXActionManager.h>

@protocol SXActionManager <NSObject>
@required
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 mode:(unsigned long long)arg5;
-(id)previewViewControllerForAction:(id)arg1;
-(id)contextMenuConfigurationForAction:(id)arg1;
-(void)commitPreviewViewController:(id)arg1;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2;

@end


@protocol SXActionActivityManager, SXActionViewManager;
@class SXActionManagerPreview, NSString;

@interface SXActionManager : NSObject <SXActionManager> {

	id<SXActionActivityManager> _activityManager;
	id<SXActionViewManager> _viewManager;
	SXActionManagerPreview* _currentPreview;

}

@property (nonatomic,readonly) id<SXActionActivityManager> activityManager;              //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,readonly) id<SXActionViewManager> viewManager;                      //@synthesize viewManager=_viewManager - In the implementation block
@property (nonatomic,retain) SXActionManagerPreview * currentPreview;                    //@synthesize currentPreview=_currentPreview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithActionActivityManager:(id)arg1 viewManager:(id)arg2 ;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 mode:(unsigned long long)arg5 ;
-(id)previewViewControllerForAction:(id)arg1 ;
-(id)contextMenuConfigurationForAction:(id)arg1 ;
-(SXActionManagerPreview *)currentPreview;
-(void)commitPreviewViewController:(id)arg1 ;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 ;
-(void)notifyPostActionHandlers:(id)arg1 action:(id)arg2 state:(unsigned long long)arg3 ;
-(id<SXActionActivityManager>)activityManager;
-(id<SXActionViewManager>)viewManager;
-(void)setCurrentPreview:(SXActionManagerPreview *)arg1 ;
@end

