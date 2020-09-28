/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, UIImage, NSString, NSDictionary;

@interface WBSPhishingClassifierResults : NSObject {

	float _confidence;
	NSURL* _url;
	UIImage* _image;
	unsigned long long _classification;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long classification;                    //@synthesize classification=_classification - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) float confidence;                                     //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(NSString *)identifier;
-(unsigned long long)classification;
-(float)confidence;
-(UIImage *)image;
-(NSURL *)url;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithURL:(id)arg1 image:(id)arg2 classification:(unsigned long long)arg3 identifier:(id)arg4 confidence:(float)arg5 ;
@end
