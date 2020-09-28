/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CBSUIAlertAction : NSObject <NSSecureCoding> {

	NSString* _title;
	long long _style;
	/*^block*/id _handler;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id handler;                      //@synthesize handler=_handler - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)alertActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setHandler:(id)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)title;
-(long long)style;
-(id)initWithCoder:(id)arg1 ;
-(id)handler;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
@end
