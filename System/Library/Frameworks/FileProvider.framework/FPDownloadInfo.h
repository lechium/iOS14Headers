/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FPDownloadInfo : FPActionOperationInfo <NSSecureCoding> {

	BOOL _recursively;

}

@property (assign,nonatomic) BOOL recursively;              //@synthesize recursively=_recursively - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)recursively;
-(void)setRecursively:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

