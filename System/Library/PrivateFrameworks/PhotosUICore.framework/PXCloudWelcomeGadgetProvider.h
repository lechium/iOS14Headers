/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@protocol PXCMMCloudGadgetViewControllerDelegate;
@class NSArray, NSDate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable> {

	unsigned long long _sourceType;
	id<PXCMMCloudGadgetViewControllerDelegate> _gadgetDelegate;
	NSArray* _contentGadgets;

}

@property (nonatomic,copy) NSArray * contentGadgets;                                                        //@synthesize contentGadgets=_contentGadgets - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                                               //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate;              //@synthesize gadgetDelegate=_gadgetDelegate - In the implementation block
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
+(id)new;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned long long)sourceType;
-(void)generateGadgets;
-(id)initWithSourceType:(unsigned long long)arg1 ;
-(unsigned long long)gadgetType;
-(id)init;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg1 ;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg1 ;
-(NSDate *)priorityDate;
-(long long)priorityType;
-(void)resetPriorityDate;
-(long long)defaultPriority;
-(id<PXCMMCloudGadgetViewControllerDelegate>)gadgetDelegate;
-(void)setGadgetDelegate:(id<PXCMMCloudGadgetViewControllerDelegate>)arg1 ;
-(NSArray *)contentGadgets;
-(void)setContentGadgets:(NSArray *)arg1 ;
@end
