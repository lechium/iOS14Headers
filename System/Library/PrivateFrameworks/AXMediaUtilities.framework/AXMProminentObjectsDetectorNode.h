/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode {

	VNGenerateAttentionBasedSaliencyImageRequest* __imageSaliencyRequest;

}

@property (nonatomic,retain) VNGenerateAttentionBasedSaliencyImageRequest * _imageSaliencyRequest;              //@synthesize _imageSaliencyRequest=__imageSaliencyRequest - In the implementation block
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)requiresVisionFramework;
-(id)initWithCoder:(id)arg1 ;
-(VNGenerateAttentionBasedSaliencyImageRequest *)_imageSaliencyRequest;
-(void)set_imageSaliencyRequest:(VNGenerateAttentionBasedSaliencyImageRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)nodeInitialize;
@end
