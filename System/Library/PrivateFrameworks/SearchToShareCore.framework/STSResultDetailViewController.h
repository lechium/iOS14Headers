/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/STSResultDetailViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol STSResultDetailViewControllerDelegate;
@class NSURL, NSString, STSResultDetailView, UIImage, STSAnimatedImageInfo;

@interface STSResultDetailViewController : UIViewController <STSResultDetailViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _useBackgroundBlur;
	BOOL _allowCustomContentViewInteraction;
	id<STSResultDetailViewControllerDelegate> _delegate;
	NSURL* _contentURL;
	NSURL* _providerURL;
	NSString* _queryString;
	unsigned long long _queryId;
	CGSize _contentSize;

}

@property (nonatomic,retain) STSResultDetailView * view; 
@property (assign,nonatomic,__weak) id<STSResultDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                     //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) NSURL * contentURL;                                                     //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,readonly) STSAnimatedImageInfo * thumbnailInfo; 
@property (assign,nonatomic) CGSize providerIconSize; 
@property (nonatomic,retain) UIImage * providerIcon; 
@property (nonatomic,copy) NSString * providerName; 
@property (nonatomic,retain) NSURL * providerURL;                                                    //@synthesize providerURL=_providerURL - In the implementation block
@property (assign,nonatomic) BOOL isFullscreen; 
@property (nonatomic,retain) NSString * queryString;                                                 //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) BOOL useBackgroundBlur;                                                 //@synthesize useBackgroundBlur=_useBackgroundBlur - In the implementation block
@property (assign) unsigned long long queryId;                                                       //@synthesize queryId=_queryId - In the implementation block
@property (assign,nonatomic) BOOL allowCustomContentViewInteraction;                                 //@synthesize allowCustomContentViewInteraction=_allowCustomContentViewInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFullscreen;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)providerName;
-(void)setQueryId:(unsigned long long)arg1 ;
-(id)detailView;
-(unsigned long long)queryId;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(NSURL *)contentURL;
-(void)loadView;
-(void)setDelegate:(id<STSResultDetailViewControllerDelegate>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setProviderURL:(NSURL *)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(UIImage *)thumbnail;
-(id<STSResultDetailViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(NSString *)queryString;
-(NSURL *)providerURL;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)setUseBackgroundBlur:(BOOL)arg1 ;
-(STSAnimatedImageInfo *)thumbnailInfo;
-(CGSize)providerIconSize;
-(void)setProviderIconSize:(CGSize)arg1 ;
-(UIImage *)providerIcon;
-(void)setProviderIcon:(UIImage *)arg1 ;
-(void)updateWithThumbnail:(id)arg1 orThumbnailInfo:(id)arg2 ;
-(CGRect)contentFrameForBounds:(CGRect)arg1 traitCollection:(id)arg2 ;
-(void)detailViewDidTapProvider:(id)arg1 ;
-(void)detailViewDidTapSend:(id)arg1 ;
-(void)updateCustomContentWithView:(id)arg1 ;
-(BOOL)useBackgroundBlur;
-(BOOL)allowCustomContentViewInteraction;
-(void)setAllowCustomContentViewInteraction:(BOOL)arg1 ;
@end

