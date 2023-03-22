/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** DisplayModule that let systems get this interface as parameter
*/

#pragma once

#include "ISystemManager.hpp"
#include "ArcadeStruct.hpp"

namespace Arcade {
    namespace Core {
        /**
         * @brief The IDisplayModule interface
         *
         * The IDisplayModule is passed to all systems
         */
        class IDisplayModule {
            public:
                virtual ~IDisplayModule() = default;

                /**
                 * @brief Get the system manager of the current graphical
                 * library
                 *
                 * @return The system manager of the current graphical library
                 */
                virtual ECS::ISystemManager &getSystemManager() = 0;
                /**
                 * @brief Change the current active graphical library to the
                 * given graphical library
                 *
                 * @param libGraphicName The graphical library name (only the
                 * libname without .so)
                 *
                 * @return True if the graphical library was changed, false
                 * otherwise
                 */
                virtual bool changeGraphicLib(
                const std::string &libGraphicName) = 0;
                /**
                 * @brief Change the current active graphical library to the
                 * next one
                 *
                 * (because the epitech subject says we can switch to the next
                 * graphical library in the folder of availible graphical
                 * library)
                 *
                 * @return True if the graphical library was changed, false
                 */
                virtual bool changeGraphicLib() = 0;
                /**
                 * @brief Get he size of the window
                 */
                virtual Arcade::Vector2f &getWindowSize() = 0;
                /**
                 * @brief Set the window size
                 *
                 * @param newSize The vector2f representing the new window size
                 */
                virtual void setWindowSize(const Arcade::Vector2f &newSize) = 0;
        };
    } // namespace Core
} // namespace Arcade
