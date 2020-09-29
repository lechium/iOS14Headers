/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureConnectionConfiguration.h>

@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	NSArray* _metadataIdentifiers;
	CGRect _metadataRectOfInterest;
	int _faceTrackingMaxFaces;
	BOOL _faceTrackingUsesFaceRecognition;

}

@property (nonatomic,copy) NSArray * metadataIdentifiers;                       //@synthesize metadataIdentifiers=_metadataIdentifiers - In the implementation block
@property (assign,nonatomic) CGRect metadataRectOfInterest;                     //@synthesize metadataRectOfInterest=_metadataRectOfInterest - In the implementation block
@property (assign,nonatomic) int faceTrackingMaxFaces;                          //@synthesize faceTrackingMaxFaces=_faceTrackingMaxFaces - In the implementation block
@property (assign,nonatomic) BOOL faceTrackingUsesFaceRecognition;              //@synthesize faceTrackingUsesFaceRecognition=_faceTrackingUsesFaceRecognition - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFaceTrackingMaxFaces:(int)arg1 ;
-(void)dealloc;
-(int)faceTrackingMaxFaces;
-(void)setMetadataIdentifiers:(NSArray *)arg1 ;
-(BOOL)faceTrackingUsesFaceRecognition;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)metadataIdentifiers;
-(void)setFaceTrackingUsesFaceRecognition:(BOOL)arg1 ;
-(id)description;
-(CGRect)metadataRectOfInterest;
-(void)setMetadataRectOfInterest:(CGRect)arg1 ;
@end
