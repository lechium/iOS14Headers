/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIView, PXViewSpec, NSString;

@interface PXUIGenericViewTile : NSObject <PXUIViewBasicTile> {

	UIView* _view;
	PXViewSpec* __spec;

}

@property (setter=_setSpec:,nonatomic,retain) PXViewSpec * _spec;              //@synthesize _spec=__spec - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXViewSpec *)_spec;
-(void)prepareForReuse;
-(UIView *)view;
-(void)_setSpec:(id)arg1 ;
-(void)becomeReusable;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
@end
