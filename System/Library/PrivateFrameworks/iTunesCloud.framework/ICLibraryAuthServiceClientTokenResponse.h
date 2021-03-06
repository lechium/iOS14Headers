/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICLibraryAuthServiceClientTokenResult;

@interface ICLibraryAuthServiceClientTokenResponse : NSObject <NSCopying> {

	BOOL _success;
	int _resultCode;
	NSString* _serverHostName;
	long long _serverInstance;
	ICLibraryAuthServiceClientTokenResult* _tokenResult;

}

@property (nonatomic,readonly) int resultCode;                                                        //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverHostName;                                        //@synthesize serverHostName=_serverHostName - In the implementation block
@property (nonatomic,readonly) long long serverInstance;                                              //@synthesize serverInstance=_serverInstance - In the implementation block
@property (assign,getter=isSuccess,nonatomic) BOOL success;                                           //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) ICLibraryAuthServiceClientTokenResult * tokenResult;              //@synthesize tokenResult=_tokenResult - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isSuccess;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
-(long long)serverInstance;
-(int)resultCode;
-(NSString *)serverHostName;
-(ICLibraryAuthServiceClientTokenResult *)tokenResult;
-(id)initWithResultCode:(int)arg1 ;
-(id)description;
@end

