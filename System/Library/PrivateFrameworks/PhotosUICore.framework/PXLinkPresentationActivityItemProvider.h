/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class PXLinkPresentationConfiguration, NSString;

@interface PXLinkPresentationActivityItemProvider : NSObject <UIActivityItemLinkPresentationSource> {

	PXLinkPresentationConfiguration* _configuration;

}

@property (nonatomic,readonly) PXLinkPresentationConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_linkMetadataForConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(PXLinkPresentationConfiguration *)configuration;
@end

