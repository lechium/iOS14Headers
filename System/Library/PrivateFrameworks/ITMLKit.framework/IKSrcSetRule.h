/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, IKStyleMediaQuery;

@interface IKSrcSetRule : NSObject {

	NSURL* _imageURL;
	NSString* _descriptor;
	IKStyleMediaQuery* _mediaQuery;

}

@property (nonatomic,retain) NSURL * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * descriptor;                       //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) IKStyleMediaQuery * mediaQuery;              //@synthesize mediaQuery=_mediaQuery - In the implementation block
-(void)setDescriptor:(NSString *)arg1 ;
-(NSString *)descriptor;
-(void)setImageURL:(NSURL *)arg1 ;
-(IKStyleMediaQuery *)mediaQuery;
-(NSURL *)imageURL;
-(id)initWithURL:(id)arg1 descriptor:(id)arg2 ;
-(void)_parseDescriptor:(id)arg1 ;
-(void)_parseMediaQueryDescriptor:(id)arg1 ;
-(void)_parseResolutionDescriptor:(id)arg1 ;
-(void)setMediaQuery:(IKStyleMediaQuery *)arg1 ;
@end
