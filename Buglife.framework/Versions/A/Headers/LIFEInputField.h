//
//  LIFEInputField.h
//  Buglife
//
//  Copyright (c) 2017 Buglife, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Facilitates appearance & behavior configuration of input fields in the bug reporter form.
 */
@interface LIFEInputField : NSObject <NSCopying>

/**
 * Default constructor
 * @param attributeName The attribute name. If the given attributeName is equal to
 *                      a custom attribute value set via `Buglife.setStringValue(_:forAttribute:)`, then
 *                      that value will be the default value for this field in the bug
 *                      reporter UI.
 */
- (nonnull instancetype)initWithAttributeName:(nonnull NSString *)attributeName NS_DESIGNATED_INITIALIZER;

- (null_unspecified instancetype)init NS_UNAVAILABLE;

/**
 *  The bug report attribute name for this input field.
 *
 *  If the attribute name matches an attribute programmatically set
 *  using Buglife.setStringValue(_:, forAttribute:), then the value
 *  from that call will become the default value in the input field.
 *
 *  @see Buglife.setStringValue(_:, forAttribute:)
 */
@property (nonatomic, readonly, nonnull, copy) NSString *attributeName;

/**
 * The user-facing label for the input field.
 * The default value returned is the attribute name.
 */
@property (nonatomic, null_resettable, copy) NSString *title;

/**
 * Returns YES if this is a required field.
 * The value of this property is ignored if the
 * `visible` property returns NO.
 *
 * @note This property currently does nothing when used with custom attributes.
 *       `Required` custom attributes will be supported in an upcoming release.
 */
@property (nonatomic, getter=isRequired) BOOL required;

/**
 * Returns YES if this field is visible to the user.
 */
@property (nonatomic, getter=isVisible) BOOL visible DEPRECATED_ATTRIBUTE;

@end
