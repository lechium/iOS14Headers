/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMemoryViewPresentationDelegate.h>
#import <libobjc.A.dylib/PXSurveyQuestionConfiguration.h>

@class PXMemoryView, NSString, PHPhotoLibrary, PXSurveyQuestionConfigurationHandlers, PHMemory, UIView, UIImage;

@interface PXSurveyQuestionMemoryConfiguration : NSObject <PXMemoryViewPresentationDelegate, PXSurveyQuestionConfiguration> {

	PXMemoryView* _memoryView;
	NSString* _customKeyAssetIdentifier;
	PHPhotoLibrary* _photoLibrary;
	NSString* _title;
	PXSurveyQuestionConfigurationHandlers* _handlers;
	PHMemory* _memory;
	NSString* _songAdamId;

}

@property (nonatomic,readonly) PHMemory * memory;                                           //@synthesize memory=_memory - In the implementation block
@property (nonatomic,readonly) NSString * songAdamId;                                       //@synthesize songAdamId=_songAdamId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIImage * contentImageForOneUp; 
@property (nonatomic,readonly) CGRect contentRectForOneUp; 
@property (nonatomic,retain) PXSurveyQuestionConfigurationHandlers * handlers;              //@synthesize handlers=_handlers - In the implementation block
-(PXSurveyQuestionConfigurationHandlers *)handlers;
-(PHMemory *)memory;
-(UIView *)contentView;
-(void)setHandlers:(PXSurveyQuestionConfigurationHandlers *)arg1 ;
-(void)layoutContentViewInRect:(CGRect)arg1 ;
-(UIImage *)contentImageForOneUp;
-(CGRect)contentRectForOneUp;
-(NSString *)title;
-(void)presentDetailsForMemoryView:(id)arg1 ;
-(id)initWithTitle:(id)arg1 memory:(id)arg2 songAdamId:(id)arg3 customKeyAssetIdentifier:(id)arg4 ;
-(NSString *)songAdamId;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
