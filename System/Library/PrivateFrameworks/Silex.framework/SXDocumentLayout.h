/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXDocumentLayout.h>

@protocol SXDocumentLayout <NSObject>
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long margin; 
@property (nonatomic,readonly) long long gutter; 
@property (nonatomic,readonly) unsigned long long columns; 
@required
-(long long)width;
-(long long)gutter;
-(long long)margin;
-(unsigned long long)columns;

@end


@class NSString;

@interface SXDocumentLayout : NSObject <SXDocumentLayout> {

	long long _width;
	long long _margin;
	long long _gutter;
	unsigned long long _columns;

}

@property (nonatomic,readonly) long long width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) long long margin;                        //@synthesize margin=_margin - In the implementation block
@property (nonatomic,readonly) long long gutter;                        //@synthesize gutter=_gutter - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;              //@synthesize columns=_columns - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)width;
-(long long)gutter;
-(long long)margin;
-(unsigned long long)columns;
-(NSString *)description;
-(id)initWithWidth:(long long)arg1 margin:(long long)arg2 gutter:(long long)arg3 columns:(unsigned long long)arg4 ;
@end
