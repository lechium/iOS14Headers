/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AADataEventTraits : NSObject {

	 onlyOnce;
	 unique;
	 discardWhenPresent;

}

@property (assign,nonatomic) BOOL onlyOnce; 
@property (assign,nonatomic) BOOL unique; 
@property (assign,nonatomic) BOOL discardWhenPresent; 
-(BOOL)unique;
-(void)setDiscardWhenPresent:(BOOL)arg1 ;
-(id)init;
-(BOOL)onlyOnce;
-(void)setUnique:(BOOL)arg1 ;
-(void)setOnlyOnce:(BOOL)arg1 ;
-(BOOL)discardWhenPresent;
@end
