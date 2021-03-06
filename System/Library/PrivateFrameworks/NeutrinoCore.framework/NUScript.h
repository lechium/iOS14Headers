/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface NUScript : NSObject {

	NSString* _source;
	NSURL* _url;

}

@property (retain) NSString * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
-(BOOL)load:(out id*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)init;
-(id)initWithSource:(id)arg1 ;
-(NSString *)source;
-(NSURL *)url;
-(id)description;
@end

