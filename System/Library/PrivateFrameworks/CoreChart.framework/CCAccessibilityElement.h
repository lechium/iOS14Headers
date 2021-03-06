/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreChart/CoreChart-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSString;

@interface CCAccessibilityElement : UIAccessibilityElement {

	NSString* label;
	NSString* roleDescription;

}

@property (assign) CGRect frame; 
@property (retain) NSString * label; 
@property (retain) NSString * roleDescription; 
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(NSString *)roleDescription;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setRoleDescription:(NSString *)arg1 ;
@end

