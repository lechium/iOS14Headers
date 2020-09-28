/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelLibraryRequest.h>

@class NSArray, NSString;

@interface MPModelLibrarySearchRequest : MPModelLibraryRequest {

	NSArray* _scopes;
	long long _maximumResultsPerScope;
	NSString* _searchString;

}

@property (nonatomic,copy) NSArray * scopes;                                //@synthesize scopes=_scopes - In the implementation block
@property (assign,nonatomic) long long maximumResultsPerScope;              //@synthesize maximumResultsPerScope=_maximumResultsPerScope - In the implementation block
@property (nonatomic,copy) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScopes:(NSArray *)arg1 ;
-(long long)maximumResultsPerScope;
-(void)setMaximumResultsPerScope:(long long)arg1 ;
-(NSArray *)scopes;
-(NSString *)searchString;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
