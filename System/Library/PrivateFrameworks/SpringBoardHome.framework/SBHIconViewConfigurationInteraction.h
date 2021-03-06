/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:11 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol SBHIconViewConfigurationInteraction <NSObject>
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding> configuration; 
@property (assign,nonatomic,__weak) id<SBHIconViewConfigurationInteractionDelegate> delegate; 
@required
-(void)beginConfiguration;
-(void)endConfiguration;
-(void)endConfigurationImmediately;
-(void)setDelegate:(id)arg1;
-(id<SBHIconViewConfigurationInteractionDelegate>)delegate;
-(id<NSCopying><NSSecureCoding>)configuration;

@end

