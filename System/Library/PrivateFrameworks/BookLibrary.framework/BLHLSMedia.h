/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface BLHLSMedia : NSObject {

	NSString* _type;
	NSURL* _url;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(NSString *)type;
-(NSURL *)url;
-(NSString *)name;
-(id)description;
-(void)setPropertiesFromAttributeList:(id)arg1 ;
@end

