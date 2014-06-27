//
//  Lyt.h
//  Lyt
//
//  Created by Hermés Piqué on 26/03/14.
//  Copyright (c) 2014 Robot Media. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>

@interface UIView (Lyt)

// Alignment

- (NSLayoutConstraint*)lyt_alignTopToParent;

- (NSLayoutConstraint*)lyt_alignTopToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignTopToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignTopToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignRightToParent;

- (NSLayoutConstraint*)lyt_alignRightToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignRightToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignRightToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignBottomToParent;

- (NSLayoutConstraint*)lyt_alignBottomToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignBottomToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignBottomToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignLeftToParent;

- (NSLayoutConstraint*)lyt_alignLeftToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_alignLeftToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_alignLeftToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_alignSidesToParent;

- (NSArray*)lyt_alignSidesToParentWithMargin:(CGFloat)margin;

- (NSArray*)lyt_alignSidesToView:(UIView*)view;

- (NSArray*)lyt_alignSidesToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_alignToParent;

- (NSArray*)lyt_alignToParentWithMargin:(CGFloat)margin;

- (NSArray*)lyt_alignToView:(UIView*)view;

- (NSArray*)lyt_alignToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToParent;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningTopToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningRightToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToParent;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningBottomToView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToParentWithMargin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByAligningLeftToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningSidesToParentWithMargin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningSidesToView:(UIView*)view margin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningToParent;

- (NSArray*)lyt_constraintsByAligningToParentWithMargin:(CGFloat)margin;

- (NSArray*)lyt_constraintsByAligningToView:(UIView*)view margin:(CGFloat)margin;

// Centering

- (NSLayoutConstraint*)lyt_centerXInParent;

- (NSLayoutConstraint*)lyt_centerXInParentWithOffset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_centerXWithView:(UIView*)view;

- (NSLayoutConstraint*)lyt_centerXWithView:(UIView*)view offset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_centerYInParent;

- (NSLayoutConstraint*)lyt_centerYInParentWithOffset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_centerYWithView:(UIView*)view;

- (NSLayoutConstraint*)lyt_centerYWithView:(UIView*)view offset:(CGFloat)offset;

- (NSArray*)lyt_centerInParent;

- (NSArray*)lyt_centerInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_centerWithView:(UIView*)view;

- (NSArray*)lyt_centerWithView:(UIView*)view offset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_constraintByCenteringXInParent;

- (NSLayoutConstraint*)lyt_constraintByCenteringXInParentWithOffset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByCenteringXWithView:(UIView*)view offset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_constraintByCenteringYInParent;

- (NSLayoutConstraint*)lyt_constraintByCenteringYInParentWithOffset:(CGFloat)offset;

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByCenteringYWithView:(UIView*)view offset:(CGFloat)offset;

- (NSArray*)lyt_constraintsByCenteringInParent;

- (NSArray*)lyt_constraintsByCenteringInParentWithOffset:(CGFloat)offset;

- (NSArray*)lyt_constraintsByCenteringWithView:(UIView*)view;

- (NSArray*)lyt_constraintsByCenteringWithView:(UIView*)view offset:(CGFloat)offset;

// Placement

- (NSLayoutConstraint*)lyt_placeAboveView:(UIView*)view;

- (NSLayoutConstraint*)lyt_placeAboveView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_placeRightOfView:(UIView*)view;

- (NSLayoutConstraint*)lyt_placeRightOfView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_placeBelowView:(UIView*)view;

- (NSLayoutConstraint*)lyt_placeBelowView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_placeLeftOfView:(UIView*)view;

- (NSLayoutConstraint*)lyt_placeLeftOfView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByPlacingAboveView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingRightOfView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByPlacingRightOfView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByPlacingBelowView:(UIView*)view margin:(CGFloat)margin;

- (NSLayoutConstraint*)lyt_constraintByPlacingLeftOfView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByPlacingLeftOfView:(UIView*)view margin:(CGFloat)margin;

// Position and sizing

- (NSLayoutConstraint*)lyt_setX:(CGFloat)x;

- (NSLayoutConstraint*)lyt_setY:(CGFloat)y;

- (NSArray*)lyt_setOrigin:(CGPoint)origin;

- (NSLayoutConstraint*)lyt_setWidth:(CGFloat)width;

- (NSLayoutConstraint*)lyt_setHeight:(CGFloat)height;

- (NSArray*)lyt_setSize:(CGSize)size;

- (NSArray*)lyt_setFrame:(CGRect)frame;

- (NSLayoutConstraint*)lyt_matchWidthToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_matchHeightToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintBySettingX:(CGFloat)x;

- (NSLayoutConstraint*)lyt_constraintBySettingY:(CGFloat)y;

- (NSArray*)lyt_constraintsBySettingOrigin:(CGPoint)origin;

- (NSLayoutConstraint*)lyt_constraintBySettingWidth:(CGFloat)width;

- (NSLayoutConstraint*)lyt_constraintBySettingHeight:(CGFloat)height;

- (NSArray*)lyt_constraintsBySettingSize:(CGSize)size;

- (NSArray*)lyt_constraintsBySettingFrame:(CGRect)frame;

- (NSLayoutConstraint*)lyt_constraintByMatchingWidthToView:(UIView*)view;

- (NSLayoutConstraint*)lyt_constraintByMatchingHeightToView:(UIView*)view;

- (NSArray*)lyt_constraintsByMatchingSizeToView:(UIView*)view;

@end

