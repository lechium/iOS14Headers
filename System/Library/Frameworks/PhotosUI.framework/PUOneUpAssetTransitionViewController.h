/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PUOneUpAssetTransitionViewController <NSObject>
@optional
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2;
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2 options:(unsigned long long)arg3;
-(void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4;
-(void)oneUpAssetTransitionWillBegin:(id)arg1;
-(void)oneUpAssetTransitionDidEnd:(id)arg1;
-(CGRect*)oneUpAssetTransitionAssetFinalFrame:(id)arg1;
-(id)createAssetTransitionInfo;

@end

